import subprocess
import os
import shutil
import argparse

def compile(file):
    compiler = f"g++ {file} -o main.out -Wall -Wextra -Wshadow -D_GLIBCXX_ASSERTIONS -DDEBUG -g3 -fmax-errors=2"
    subprocess.run(compiler, shell=True, check=True)

def remove_exec():
    os.remove("main.out")

def complete():
    if os.path.exists("main.out.dSYM"):
        shutil.rmtree("main.out.dSYM")



def run_test_cases(test_cases_file, output_file):
    with open(test_cases_file, 'r') as tc, open(output_file, 'w') as output:
        test_cases = tc.read().split('#')
        for test_case in test_cases[1:]:  # Skip the first split part, which will be empty
            lines = test_case.strip().split('\n')
            if not lines:
                continue
            test_case_label = lines[0].strip()  
            test_case_input = '\n'.join(lines[1:]).strip() 

            output.write(f"{test_case_label}\n")

            process = subprocess.run("./main.out", input=test_case_input, text=True, capture_output=True)
            output.write(process.stdout)
            output.write("\n\n")  


def main():
    cpp_file = "231A.cpp"
    input_file = "input.txt"
    output_file = "output.txt"
    compile(cpp_file)
    run_test_cases(input_file, output_file)
    remove_exec()
    parser = argparse.ArgumentParser()
    parser.add_argument('--function', choices=['complete'])
    args = parser.parse_args()
    if args.function == 'complete':
        complete()  



if __name__ == "__main__":
    main()



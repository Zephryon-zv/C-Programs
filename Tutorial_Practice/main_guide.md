# Script to Generate C Files and Undo

## Objective

The goal is to create a Python script that generates a specified number of C files with a basic template. Additionally, the script should provide an option to undo the last file creation.

## Initial Script

The initial script generates `C files` with a basic template and allows the user to specify the number of files to create. The script uses the `os` module for file management and handles basic exceptions.

```python
# Initial Script
import os

bare_min_code = """#include <stdio.h>\nint main(){\n\n return 0;\n}"""

num_of_files = int(input("Enter the number of files: "))
try:
    path = os.getcwd()
    
    for i in range(num_of_files):
        file_name = f"Part{i}.c"
        file_path = os.path.join(path, file_name)
        with open(file_path, "w") as f:
            f.write(bare_min_code)

except Exception as e:
    print(e)

```
## Improvements

1. `Error Handling`: Added more detailed error handling, including checking if the number of files is greater than zero.
2. `User Input Validation`: Validated user input to ensure a valid integer for the number of files.
3. `Confirmation Message`: Added a confirmation message after successful file creation.

```python
# Improved Script
import os

bare_min_code = """#include <stdio.h>\nint main(){\n\n return 0;\n}"""

def generate_c_files(num_of_files):
    try:
        if num_of_files <= 0:
            print("Please enter a valid number of files (greater than zero).")
            return

        path = os.getcwd()
        
        for i in range(num_of_files):
            file_name = f"Part{i}.c"
            file_path = os.path.join(path, file_name)
            with open(file_path, "w") as f:
                f.write(bare_min_code)
        
        print(f"{num_of_files} C files created successfully in {path}.")
    
    except Exception as e:
        print(f"An error occurred: {e}")

if __name__ == "__main__":
    try:
        num_of_files = int(input("Enter the number of files: "))
    except ValueError:
        print("Please enter a valid integer for the number of files.")
    else:
        generate_c_files(num_of_files)

```

## Undo Functionality
Added an "undo" option to the script, allowing the user to remove the last created file.

```python
# Undo Functionality
import os

bare_min_code = """#include <stdio.h>\nint main(){\n\n return 0;\n}"""

def generate_c_files(num_of_files):
    try:
        if num_of_files <= 0:
            print("Please enter a valid number of files (greater than zero).")
            return

        path = os.getcwd()
        created_files = []
        
        for i in range(num_of_files):
            file_name = f"Part{i}.c"
            file_path = os.path.join(path, file_name)
            
            try:
                with open(file_path, "w") as f:
                    f.write(bare_min_code)
                    created_files.append(file_path)
            except FileExistsError:
                # Silently ignore the existing file
                pass
        
        print(f"{num_of_files} C files created successfully in {path}.")

        # Ask the user if they want to undo the last file creation
        undo_option = input("Do you want to undo the last file creation? (yes/no): ").lower()
        if undo_option == "yes" and created_files:
            last_created_file = created_files.pop()
            os.remove(last_created_file)
            print(f"Undo: File '{last_created_file}' removed.")
        else:
            print("No files to undo.")
    
    except Exception as e:
        print(f"An error occurred: {e}")

if __name__ == "__main__":
    try:
        num_of_files = int(input("Enter the number of files: "))
    except ValueError:
        print("Please enter a valid integer for the number of files.")
    else:
        generate_c_files(num_of_files)

```

## Final Version

The final version of the script includes user prompts, input validation, error handling, and the ability to undo the last file creation.

```python
# Final Script
import os

bare_min_code = """#include <stdio.h>\nint main(){\n\n return 0;\n}"""

def generate_c_files(num_of_files):
    try:
        if num_of_files <= 0:
            print("Please enter a valid number of files (greater than zero).")
            return

        path = os.getcwd()
        created_files = []
        
        for i in range(num_of_files):
            file_name = f"Part{i}.c"
            file_path = os.path.join(path, file_name)
            
            try:
                with open(file_path, "w") as f:
                    f.write(bare_min_code)
                    created_files.append(file_path)
            except FileExistsError:
                # Silently ignore the existing file
                pass
        
        print(f"{num_of_files} C files created successfully in {path}.")

        # Ask the user if they want to undo the last file creation
        undo_option = input("Do you want to undo the last file creation? (yes/no): ").lower()
        if undo_option == "yes" and created_files:
            last_created_file = created_files.pop()
            os.remove(last_created_file)
            print(f"Undo: File '{last_created_file}' removed.")
        else:
            print("No files to undo.")
    
    except Exception as e:
        print(f"An error occurred: {e}")

if __name__ == "__main__":
    try:
        num_of_files = int(input("Enter the number of files: "))
    except ValueError:
        print("Please enter a valid integer for the number of files.")
    else:
        generate_c_files(num_of_files)

```
This script provides a flexible and user-friendly solution for generating C files and includes the option to undo the last file creation.

## References:

- [ChatGPT](https://chat.openai.com/c/815d4ed8-6ef9-4921-9a70-7bd0a7185123)

- [Github Gist Link](https://gist.github.com/Zephryon-zv/19be1e0573138421f2e971983cb86199)
import os

bare_min_code = """#include <stdio.h> \nint main(){\n\n return 0;\n}"""
def generate_c_files(num_of_files):
    try:
        if num_of_files <= 0:
            print("Please enter a valid number of files (greater than zero).")
            return

        path = os.getcwd()
        create_files = []
        
        for i in range(1, num_of_files + 1):
            file_name = f"Part{i}.c"
            file_path = os.path.join(path, file_name)
            
            try:
                with open(file_path, "w") as f:
                    f.write(bare_min_code)
                    create_files.append(file_path)
            except FileExistsError:
                # Silently ignore the existing file
                pass
        
        print(f"{num_of_files} C files created successfully in {path}.")

        # Ask the user if they want to undo the last file creation
        undo_option = input("Do you want to undo the last file creation? (yes/no): ").lower()
        if undo_option == "yes" and create_files:
            # delete_files = create_files.pop()
            for files in create_files:
                os.remove(files)
                print(f"Undo: File '{files}' removed.")
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

""" 
This script is used to clean all the binary & input & output files in the current directory and its subdirectories.
"""
import os

for (root, dirs, files) in os.walk(".", topdown=True):
    for file in files:
        if file.endswith(('.exe', '.out', '.inp')):
            os.remove(os.path.join(root, file))
            print(f"Deleted: {os.path.join(root, file)}")

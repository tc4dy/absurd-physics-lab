import os
import sys

path = os.path.abspath(sys.argv[0])
print(f"Executing file: {path}")
print("Initiating self-destruct sequence...")

try:
    os.remove(path)
    print("File successfully deleted from disk.")
except Exception as e:
    print(f"Failed to delete: {e}")

print("Process is still alive and executing from memory.")

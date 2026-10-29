echo "Executing file: $0"
echo "Initiating self-destruct sequence..."

if rm "$0"; then
    echo "File successfully deleted from disk."
else
    echo "Failed to delete file."
fi

echo "Process is still alive and executing from memory."

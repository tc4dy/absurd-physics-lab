def paradox(prediction):
    if prediction is True:
        while True:
            pass
    else:
        return

prediction = False
print(f"Analyzer predicts halt: {prediction}")
print("Executing program...")
paradox(prediction)
print("Program halted.")

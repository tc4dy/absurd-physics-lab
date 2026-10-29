def evaluate_paradox():
    statement_is_true = True
    iterations = 0
    
    while iterations < 10:
        statement_is_true = not statement_is_true
        print(f"Evaluation {iterations + 1}: Statement is {statement_is_true}")
        iterations += 1
        
    print("The system cannot stabilize.")

evaluate_paradox()

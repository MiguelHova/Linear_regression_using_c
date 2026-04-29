Linear Regression from Scratch (Python)

    This project implements **Linear Regression from scratch using pure Python**, without relying on machine learning 
libraries such as scikit-learn and the goal is to deeply understand how a fundamental algorithm in Artificial Intelligence 
works under the hood.

-------------------------------------------------------------------------------------------------------------------------------

Objectives:
    - Implement a linear regression model without using libraries
    - Understand how gradient descent is used in practice 
    - Learn how models minimize errors overtime
    - Simulate the training proccess of real ML models

-------------------------------------------------------------------------------------------------------------------------------


Key concepts:
    - linear regression:  
    - Mean Squared Error
    - Gradient Descent
    - Model training and convergence

-------------------------------------------------------------------------------------------------------------------------------

Theory (optional):

    1. Linear regression:

        when data points are plotted on a graph linear regression is used to find a linear function that
    enables the model to predict the output of a given input.

        The given function is in the form: y = mx + b where:
        - m = slope
        - b = intercept (value of y when x = 0);

    2. Mean Squared Error (MSE):

        MSE is used to measure the error between the predicted and actual values of a model.

    The function is defined as: (1/n) * Σ(y - ŷ)², where:
    - y = actual value from the dataset
    - ŷ = predicted value of the model

    The squared term is used to penalize larger errors more heavily, leading to a model that fits the data more accurately.
    
    3. Gradient descent:

        Is an optimization algorithm used to minimize a function, commonly the loss function of a machine learning model. It works
    by iterativily adjusting the models parameters (θ) in the direction opposite to the gradient of the loss function.

        given function: θ:=θ−α∇J(θ)

        The gradient represents how the loss changes with respect to each parameter. By moving in the negative gradient direction,
    the algorithm reduces the error step by step. The size of each update is controlled by the learning rate (α), 
    which determines how large the adjustment is at each iteration.

        This process is repeated until the model converges to a set of parameters that produce the lowest possible error.

    4. Model training and convergence:

        Model training is the process of adjusting the model's parameters (m and b) to minimize the error between predicted and 
    actual values. This is done iteratively using Gradient Descent, where the model updates its parameters step by step based on 
    the computed gradients. Convergence occurs when the model's parameters stabilize and the error no longer decreases 
    significantly, indicating that the model has reached (or is close to) the optimal solution.

-------------------------------------------------------------------------------------------------------------------------------

Training process:
    1. Initialize parameters (`m` and `b`)
    2. Compute predictions
    3. Calculate error (MSE)
    4. Compute gradients
    5. Update parameters using Gradient Descent
    6. Repeat until convergence

-------------------------------------------------------------------------------------------------------------------------------

Results and discussion:
    

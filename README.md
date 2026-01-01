*This project has been created as part of the 42 curriculum by outaouss*

# |--> Description :

- **Goal :** The goal of this project is to sort a **stack** of integers using two stacks (Stack A and Stack B) and a limited set of **instructions**, aiming for the minimum number of **operations** possible.

- **Overview :** The project involves writing an algorithm that manipulates data structures. It requires parsing command-line arguments, handling errors (duplicates, non-integers, overflows), and implementing sorting logic. For small sets (2–5 numbers), the program uses hard-coded optimal moves. For larger sets (100–500 numbers), it employs an efficient Shank/Butterfly algorithm—an index-based approach that organizes numbers into an "hourglass" shape in Stack B before pushing them back to Stack A in perfect order.

# |--> Instructions :

- **Compilation :** to compile the project, run the following command --> **[Make]**
this will generate the | push_swap | executable .

- **Execution :** to run the program use --> **[./push_swap]** and write after the random integers you want to sort or already sorted .

# |--> Resources :

**References :**

- 1 - Documentation : 42 Project Subject PDF .
- 2 - Articles : https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a - https://www.geeksforgeeks.org/dsa/doubly-linked-list/ .
- 3 - Peer Learning .

**Usage of AI :**

- **Algorithm Optimization :** Refining the "range" values in Phase 1 and implementing "Second Max" look-ahead logic in Phase 2 to reduce move counts below project thresholds (under 700 moves for 100 numbers; under 5500 moves for 500 numbers).

- **Code Review :** Make sure My sort_kingdom Function is perfect [ just check ]

- **Testing Script :** Generating Bash and Python-based test scripts to automate the validation of move counts over thousands of random permutations .
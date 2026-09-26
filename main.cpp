#include <iostream>

// Homework 5 — Emiliano Sanchez
// CIS 5 Week 05 · Rule engine lite

int main()
{
  int score = 0;
  int attendance = 0;

  std::cout << "What is your score? 0-100\n";
  std::cin >> score;

  std::cout << "What is your attendance? 0-100\n";
  std::cin >> attendance;

  // invalid first by setting range for scores and attendance since the following conditionals depend on them.

  // edge values: -1, 101 for both scores and attendance
  if (score < 0 || score > 100)
  {
    std::cout << "Score is invalid\n";
  }
  else if (attendance < 0 || attendance > 100)
  {
    std::cout << "Attendance is invalid\n";
  }

  // Pass = 70 or higher for both values

  else if (score >= 70 && attendance >= 70)
  {
    std::cout << "Pass\n";
  }

  // Use < instead of <= so pass and fail dont share 70 as a value.

  // Fail is 70 or lower for both values

  else if (score < 70 && attendance < 70)
  {
    std::cout << "Fail\n";
  }

  else
  {
    std::cout << "Warning, one score is too low\n";
  }

  // TODO: cout question, then cin, for score and for attendance

  // Edge values: (list just-below / exactly-on / just-above for each threshold here)

  // TODO: invalid branch FIRST — out-of-range input gets its own message
  //   if (score < 0 || score > 100) { ... }

  // TODO: else if ( ... && ... ) { ... }   best outcome
  // TODO: else if ( ... ) { ... }          middle outcome
  // TODO: else { ... }                     the rest

  // TODO: two comments that explain a choice (why invalid first, why && not ||, why >= not >)

  return 0;
}

# Leak report

Memory leaks happen because when a program is allocated a sum of memory and is never freed of that memory.
This also means that we have to free the memory during the running program or through some other means.
Memory leaks also happen when a pointer changes during a program and doesn't free that meaning that the memory being used is now lost and isn't in use anymore.

# Check Whitespace Freeing

For the whitespace program I had initially thought to free cleaned in isClean however after removing a free command I found no leaks on my end. Here is the result:


HEAP SUMMARY:
==1587==     in use at exit: 1,258 bytes in 35 blocks
==1587==   total heap usage: 57 allocs, 22 frees, 154,592 bytes allocated
==1587==
==1587== LEAK SUMMARY:
==1587==    definitely lost: 0 bytes in 0 blocks
==1587==    indirectly lost: 0 bytes in 0 blocks
==1587==      possibly lost: 0 bytes in 0 blocks
==1587==    still reachable: 1,258 bytes in 35 blocks
==1587==         suppressed: 0 bytes in 0 blocks
==1587== Reachable blocks (those to which a pointer was found) are not shown.
==1587== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==1587==
==1587== For lists of detected and suppressed errors, rerun with: -s
==1587== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
./check_whitespace.c: 9: Syntax error: "(" unexpected
==1585==
==1585== HEAP SUMMARY:
==1585==     in use at exit: 1,242 bytes in 34 blocks
==1585==   total heap usage: 57 allocs, 23 frees, 154,592 bytes allocated
==1585==
==1585== LEAK SUMMARY:
==1585==    definitely lost: 0 bytes in 0 blocks
==1585==    indirectly lost: 0 bytes in 0 blocks
==1585==      possibly lost: 0 bytes in 0 blocks
==1585==    still reachable: 1,242 bytes in 34 blocks
==1585==         suppressed: 0 bytes in 0 blocks
==1585== Reachable blocks (those to which a pointer was found) are not shown.
==1585== To see them, rerun with: --leak-check=full --show-leak-kinds=all
==1585==
==1585== For lists of detected and suppressed errors, rerun with: -s
==1585== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)


# For the testing I initiated a variable and assigned strip to that variable so that it could be freed after the test was over, it seems also that that one works.

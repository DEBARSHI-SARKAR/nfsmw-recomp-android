/* speed.exe 006c2700 FUN_006c2700; analysis pseudocode, not buildable source.
 * calls 006c2620 FUN_006c2620
 * calls 006c25a0 FUN_006c25a0
 */

char FUN_006c2700(void)

{
  char cVar1;
  
  if (DAT_009018bc == 0) {
    cVar1 = FUN_006c25a0(DAT_008f945c);
    if (cVar1 == '\0') {
      DAT_009018bc = 1;
      goto LAB_006c272a;
    }
  }
  else {
    cVar1 = FUN_006c2620();
    if (cVar1 == '\0') {
      DAT_009018bc = 1;
      cVar1 = '\0';
      goto LAB_006c272a;
    }
    cVar1 = '\x01';
  }
  DAT_009018bc = 0;
LAB_006c272a:
  if (DAT_008a9260 != 0) {
    cVar1 = '\x01';
  }
  return cVar1;
}


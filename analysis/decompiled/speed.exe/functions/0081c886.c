/* speed.exe 0081c886 FUN_0081c886; analysis pseudocode, not buildable source.
 * calls 0081be9f FUN_0081be9f
 * calls 0081c131 FUN_0081c131
 * calls 0081e063 FUN_0081e063
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081bccb FUN_0081bccb
 * calls 0081ba76 FUN_0081ba76
 * calls 0081c3b6 FUN_0081c3b6
 * calls 0081c4d8 FUN_0081c4d8
 * calls 00862b41 FUN_00862b41
 */

undefined4 FUN_0081c886(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (DAT_009c2188 == '\0') {
    return 0xfffffff6;
  }
  FUN_0081bccb();
  puVar2 = (undefined4 *)FUN_0081c131(param_1);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_0081bcd9();
    uVar4 = 0xfffffff8;
  }
  else {
    FUN_0081c4d8(param_1);
    FUN_0081be9f(puVar2);
    iVar3 = FUN_0081c3b6();
    if (iVar3 == 1) {
      FUN_0081ba76(&LAB_0081c7b4);
      DAT_009c21ec = 0;
    }
    FUN_0081e063(puVar2[2]);
    uVar4 = *puVar2;
    cVar1 = *(char *)((int)puVar2 + 0x11);
    (&DAT_009c1b68)[param_1] = 0;
    FUN_0081bcd9();
    if (cVar1 == '\0') {
      FUN_00862b41(uVar4);
    }
    uVar4 = 0;
  }
  return uVar4;
}


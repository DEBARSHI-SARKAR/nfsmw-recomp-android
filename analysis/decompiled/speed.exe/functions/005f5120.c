/* speed.exe 005f5120 FUN_005f5120; analysis pseudocode, not buildable source.
 * calls 005f3390 FUN_005f3390
 * calls 0056d720 FUN_0056d720
 * calls 005ddd20 FUN_005ddd20
 */

void __thiscall FUN_005f5120(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  if ((((param_2 < 10) || (0xe < param_2)) && (param_2 != 0x5f)) && (param_2 != 0x60)) {
    iVar3 = FUN_0056d720(param_2);
    if ((iVar3 == 0) || (*(char *)(iVar3 + 1) == '\0')) {
      puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 0x2a8);
      while( true ) {
        if (puVar1 == *(undefined4 **)(param_1 + 0x2a8)) {
          FUN_005f3390(&param_2);
          return;
        }
        if (puVar1[2] == iVar2) break;
        puVar1 = (undefined4 *)*puVar1;
      }
    }
  }
  else {
    FUN_005ddd20(param_2);
  }
  return;
}


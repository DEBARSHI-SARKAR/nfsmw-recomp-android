/* speed.exe 00826799 FUN_00826799; analysis pseudocode, not buildable source.
 * calls 00824540 FUN_00824540
 * calls 0081eae9 FUN_0081eae9
 */

void FUN_00826799(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 * 0x5c + DAT_009c2520 + 0x40);
  iVar2 = *piVar1;
  do {
    if (*(ushort *)(iVar2 + 0x18) == param_2) {
      FUN_00824540(piVar1,iVar2);
      if (*(code **)(iVar2 + 4) != (code *)0x0) {
        (**(code **)(iVar2 + 4))(iVar2);
      }
      FUN_0081eae9(iVar2);
      return;
    }
    iVar2 = *(int *)(iVar2 + 8);
  } while (iVar2 != 0);
  return;
}


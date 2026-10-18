/* speed.exe 005b2d10 FUN_005b2d10; analysis pseudocode, not buildable source.
 * calls 00460dd0 FUN_00460dd0
 */

int __thiscall FUN_005b2d10(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 == 0) {
    return 0;
  }
  do {
    iVar1 = FUN_00460dd0(*(undefined4 *)(iVar2 + 0xc),param_2);
    if (iVar1 == 0) {
      return iVar2;
    }
    iVar2 = *(int *)(iVar2 + 4);
  } while (iVar2 != 0);
  return 0;
}


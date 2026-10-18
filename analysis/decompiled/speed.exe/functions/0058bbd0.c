/* speed.exe 0058bbd0 FUN_0058bbd0; analysis pseudocode, not buildable source.
 * calls 0058bbd0 FUN_0058bbd0
 * calls 0058af10 FUN_0058af10
 * calls 00524880 FUN_00524880
 */

int __thiscall FUN_0058bbd0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00524880(*(undefined4 *)(param_1 + 0x10),param_2);
  if (iVar2 == 0) {
    return 0;
  }
  for (iVar1 = *(int *)(iVar2 + 100); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    if (*(int *)(iVar1 + 0x18) == 5) {
      FUN_0058bbd0(*(undefined4 *)(iVar1 + 0x10));
    }
    else {
      FUN_0058af10(iVar1);
    }
  }
  return iVar2;
}


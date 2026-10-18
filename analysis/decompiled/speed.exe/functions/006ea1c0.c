/* speed.exe 006ea1c0 FUN_006ea1c0; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_006ea1c0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    piVar2 = (int *)(param_1 + 0xe9c);
    do {
      if (param_2 == *piVar2) {
        return *(undefined4 *)(param_1 + 0xea0 + iVar1 * 8);
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 < *(int *)(param_1 + 0x18));
  }
  return 0xffffffff;
}


/* speed.exe 0049c990 FUN_0049c990; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_0049c990(int param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(ushort *)(param_1 + 4);
  iVar2 = 0;
  if (*(short *)(param_1 + 4) != 0) {
    do {
      *(undefined4 *)(param_3 + (uint)*(ushort *)(param_1 + 8 + iVar2 * 2) * 4) =
           *(undefined4 *)
            (param_1 + ((uVar1 + 1 & 0xfffffffe) + 4 + (uint)uVar1 * param_2 * 2) * 2 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 4));
  }
  return;
}


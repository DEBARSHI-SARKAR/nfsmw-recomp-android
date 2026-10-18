/* speed.exe 00841080 FUN_00841080; analysis pseudocode, not buildable source.
 * calls 0078af20 thunk_FUN_004655f0
 */

undefined4 __fastcall FUN_00841080(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint in_EAX;
  uint uVar3;
  
  uVar3 = in_EAX & 0xffffefff;
  if ((-1 < (int)uVar3) && ((int)uVar3 < 0x20)) {
    uVar2 = *(undefined4 *)(param_1 + (uVar3 * 3 + 0x62a) * 4);
    if (((-1 < (int)uVar3) && ((int)uVar3 < 0x20)) &&
       (piVar1 = (int *)(param_1 + 0x18a0 + uVar3 * 0xc), *piVar1 != -1)) {
      *piVar1 = -1;
    }
    thunk_FUN_004655f0(uVar2);
    return 1;
  }
  return 0;
}


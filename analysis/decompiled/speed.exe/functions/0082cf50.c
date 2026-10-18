/* speed.exe 0082cf50 FUN_0082cf50; analysis pseudocode, not buildable source.
 * calls 008294a0 FUN_008294a0
 */

undefined4 FUN_0082cf50(uint *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 0xffffffd5;
  if ((DAT_009c29a8 != (int *)0x0) &&
     (piVar1 = (int *)(**(code **)(*DAT_009c29a8 + 0x20))(param_3,0x100), piVar1 != (int *)0x0)) {
    iVar2 = 0;
    if ((*param_1 & 0xff) < (uint)*(byte *)(*(int *)(DAT_009c2964 + 0x18) + 0xd)) {
      iVar2 = *(int *)(DAT_009c2964 + 0x18) +
              *(int *)(*(int *)(DAT_009c2964 + 0x34) + (*param_1 & 0xff) * 4) * 4;
    }
    uVar3 = 0xffffffd5;
    if (param_2 < 0) {
      iVar2 = *(int *)(iVar2 + 8);
    }
    else {
      iVar2 = *(int *)(param_2 * 0x10 + 0x14 + iVar2);
    }
    if (iVar2 == *piVar1) {
      uVar3 = 0;
    }
    FUN_008294a0(piVar1);
  }
  return uVar3;
}


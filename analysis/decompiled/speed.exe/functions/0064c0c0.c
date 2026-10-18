/* speed.exe 0064c0c0 FUN_0064c0c0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 0064bdf0 FUN_0064bdf0
 */

undefined4 __thiscall FUN_0064c0c0(int param_1,float param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = 0;
  iVar3 = 0;
  pfVar4 = (float *)(param_1 + 0xc);
  do {
    puVar1 = (undefined4 *)pfVar4[-3];
    if (puVar1 != (undefined4 *)0x0) {
      if ((*pfVar4 < *(float *)*puVar1) || (((float *)*puVar1)[puVar1[1] * 2 + -2] <= *pfVar4)) {
        pfVar4[-3] = 0.0;
        *(undefined1 *)(param_1 + 0x24 + iVar3) = 0xff;
      }
      else {
        FUN_0064bdf0(*pfVar4);
        iVar2 = FUN_007c4b80();
        if (iVar2 <= *(int *)(param_1 + 0x28)) {
          iVar2 = *(int *)(param_1 + 0x28);
        }
        *(int *)(param_1 + 0x28) = iVar2;
        *pfVar4 = param_2 / pfVar4[3] + *pfVar4;
      }
    }
    iVar3 = iVar3 + 1;
    pfVar4 = pfVar4 + 1;
  } while (iVar3 < 3);
  if (*(int *)(param_1 + 0x28) < 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (0xff < *(int *)(param_1 + 0x28)) {
    *(undefined4 *)(param_1 + 0x28) = 0xff;
  }
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x28) >> 8),
                  *(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x2c));
}


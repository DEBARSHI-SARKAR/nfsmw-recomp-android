/* speed.exe 0074a160 FUN_0074a160; analysis pseudocode, not buildable source.
 * calls 0045f3c0 FUN_0045f3c0
 * calls 00749fb0 FUN_00749fb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0074a160(int param_1)

{
  int iVar1;
  int iVar2;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_1c;
  float fStack_18;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x288) + 0x44);
  if (((iVar2 != *(int *)(param_1 + 0x288) + 0x44) && (iVar2 != 0)) &&
     ((int *)(iVar2 + -4) != (int *)0x0)) {
    iVar2 = (**(code **)(*(int *)(iVar2 + -4) + 0x10))();
    if (iVar2 != 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x288) + 0x40);
      fStack_24 = *(float *)(iVar1 + 0x54);
      fStack_28 = *(float *)(iVar1 + 0x50);
      FUN_0045f3c0(&fStack_28,&fStack_28);
      fStack_1c = *(float *)(iVar2 + 0x24);
      fStack_18 = *(float *)(iVar2 + 0x28);
      fStack_30 = (*(float *)(param_1 + 0x3808) + *(float *)(param_1 + 0x3810)) * _DAT_008933d4 -
                  *(float *)(iVar2 + 0x20);
      fStack_2c = (*(float *)(param_1 + 0x3814) + *(float *)(param_1 + 0x380c)) * _DAT_008933d4 -
                  fStack_1c;
      FUN_0045f3c0(&fStack_30,&fStack_30);
      iVar2 = *(int *)(*(int *)(param_1 + 0x288) + 0x68);
      if (fStack_30 * fStack_28 + fStack_24 * fStack_2c <= _DAT_00890968) {
        if (iVar2 != 0) {
          FUN_00749fb0(*(undefined4 *)(param_1 + 0x3818),*(undefined4 *)(param_1 + 0x381c),
                       DAT_009031f0 + fStack_18,*(undefined4 *)(param_1 + 0x3820),
                       *(undefined4 *)(param_1 + 0x3824),DAT_009031f0 + fStack_18,
                       *(undefined4 *)(param_1 + 0x3818),*(undefined4 *)(param_1 + 0x381c),fStack_18
                       ,*(undefined4 *)(param_1 + 0x3820),*(undefined4 *)(param_1 + 0x3824),
                       fStack_18);
        }
      }
      else if (iVar2 != 0) {
        FUN_00749fb0(*(undefined4 *)(param_1 + 0x3808),*(undefined4 *)(param_1 + 0x380c),
                     DAT_009031f0 + fStack_18,*(undefined4 *)(param_1 + 0x3810),
                     *(undefined4 *)(param_1 + 0x3814),DAT_009031f0 + fStack_18,
                     *(undefined4 *)(param_1 + 0x3808),*(undefined4 *)(param_1 + 0x380c),fStack_18,
                     *(undefined4 *)(param_1 + 0x3810),*(undefined4 *)(param_1 + 0x3814),fStack_18);
        return;
      }
    }
  }
  return;
}


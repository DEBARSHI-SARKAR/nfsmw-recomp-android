/* speed.exe 007a93e0 FUN_007a93e0; analysis pseudocode, not buildable source.
 * calls 007a2790 FUN_007a2790
 * calls 00516c90 FUN_00516c90
 * calls 00515e20 FUN_00515e20
 * calls 00515c00 FUN_00515c00
 * calls 005af1c0 FUN_005af1c0
 */

void __thiscall FUN_007a93e0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 local_20 [32];
  
  FUN_007a2790(param_2);
  iVar1 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x54) = 0;
  if ((*(char *)(iVar1 + 0x621) != '\0') && (iVar1 != -0x310)) {
    if (*(char *)(iVar1 + 0x621) == '\0') {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)(iVar1 + 0x310);
    }
    if (*piVar2 != *param_2) {
      if (*(int *)(param_1 + 0x34) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x574) = 0;
      }
      FUN_00516c90(0xa05a328e,0,0);
    }
  }
  FUN_00515e20(local_20,0x20,"CAR_NAME_%s",*param_2 * 0xd0 + DAT_009b09d8);
  uVar3 = FUN_005af1c0(local_20);
  FUN_00515c00(*(undefined4 *)(param_1 + 100),uVar3);
  return;
}


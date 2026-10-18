/* speed.exe 00839360 FUN_00839360; analysis pseudocode, not buildable source.
 * calls 00838360 FUN_00838360
 * calls 008367a0 FUN_008367a0
 * calls 00837690 FUN_00837690
 * calls 008495f0 FUN_008495f0
 */

void FUN_00839360(int param_1)

{
  uint uVar1;
  int *piVar2;
  
  if (param_1 != 0) {
    uVar1 = FUN_008495f0(*(undefined4 *)(param_1 + 8));
    *(uint *)(param_1 + 0x50) = uVar1;
    if ((*(uint *)(param_1 + 0x68) != 0) && (*(uint *)(param_1 + 0x68) < uVar1)) {
      piVar2 = (int *)FUN_00837690(param_1,(undefined1 *)(param_1 + 0x6c));
      *(undefined1 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0x68) = 0;
      if (piVar2 != (int *)0x0) {
        piVar2 = *(int **)(*piVar2 + 0x100);
        if (piVar2 != (int *)0x0) {
          *(uint *)(*piVar2 + 0xf8) = *(uint *)(*piVar2 + 0xf8) | 0x4000000;
          if (*(code **)(param_1 + 0x58) != (code *)0x0) {
            (**(code **)(param_1 + 0x58))(param_1,piVar2,0x4000000,*(undefined4 *)(param_1 + 0x5c));
            FUN_00838360(param_1,*piVar2,2,0,0);
          }
          *(undefined4 *)(param_1 + 0x3c) = 1;
          if (*(code **)(param_1 + 0x24) != (code *)0x0) {
            (**(code **)(param_1 + 0x24))(param_1,5,0,*(undefined4 *)(param_1 + 0x20));
          }
        }
        FUN_008367a0(param_1);
      }
    }
    if (*(int *)(param_1 + 0xc4) != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
      if (*(code **)(param_1 + 0x2c) != (code *)0x0) {
        (**(code **)(param_1 + 0x2c))
                  (param_1,*(int *)(param_1 + 0xc4),*(undefined4 *)(param_1 + 200),
                   *(undefined4 *)(param_1 + 0x28));
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      *(undefined4 *)(param_1 + 0xc4) = 0;
    }
  }
  return;
}


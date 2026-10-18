/* speed.exe 00430080 FUN_00430080; analysis pseudocode, not buildable source.
 * calls 007e7cc0 FUN_007e7cc0
 * calls 007e7c60 FUN_007e7c60
 * calls 00424f00 FUN_00424f00
 * calls 00425050 FUN_00425050
 */

int __thiscall FUN_00430080(int param_1,int param_2,uint param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  if (*(uint *)(param_2 + 0x14) < param_3) {
    FUN_007e7cc0();
  }
  uVar3 = *(int *)(param_2 + 0x14) - param_3;
  if (param_4 < uVar3) {
    uVar3 = param_4;
  }
  if (param_1 != param_2) {
    if (uVar3 == 0xffffffff) {
      FUN_007e7c60();
    }
    if (*(uint *)(param_1 + 0x18) < uVar3) {
      FUN_00425050(uVar3,*(undefined4 *)(param_1 + 0x14));
    }
    else if (uVar3 == 0) {
      *(undefined4 *)(param_1 + 0x14) = 0;
      if (*(uint *)(param_1 + 0x18) < 0x10) {
        *(undefined1 *)(param_1 + 4) = 0;
        return param_1;
      }
      **(undefined1 **)(param_1 + 4) = 0;
      return param_1;
    }
    if (uVar3 != 0) {
      if (*(uint *)(param_2 + 0x18) < 0x10) {
        param_2 = param_2 + 4;
      }
      else {
        param_2 = *(int *)(param_2 + 4);
      }
      piVar1 = (int *)(param_1 + 4);
      piVar5 = piVar1;
      if (0xf < *(uint *)(param_1 + 0x18)) {
        piVar5 = (undefined4 *)*piVar1;
      }
      puVar4 = (undefined4 *)(param_3 + param_2);
      for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *piVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        piVar5 = piVar5 + 1;
      }
      for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)piVar5 = *(undefined1 *)puVar4;
        puVar4 = (undefined4 *)((int)puVar4 + 1);
        piVar5 = (undefined4 *)((int)piVar5 + 1);
      }
      *(uint *)(param_1 + 0x14) = uVar3;
      if (0xf < *(uint *)(param_1 + 0x18)) {
        piVar1 = (int *)*piVar1;
      }
      *(undefined1 *)((int)piVar1 + uVar3) = 0;
    }
    return param_1;
  }
  FUN_00424f00(uVar3 + param_3,0xffffffff);
  FUN_00424f00(0,param_3);
  return param_1;
}


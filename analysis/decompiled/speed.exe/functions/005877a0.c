/* speed.exe 005877a0 FUN_005877a0; analysis pseudocode, not buildable source.
 * calls 005251a0 FUN_005251a0
 * calls 00515520 FUN_00515520
 * calls 00515e20 FUN_00515e20
 * calls 005af1c0 FUN_005af1c0
 * calls 00515e90 FUN_00515e90
 * calls 00573270 FUN_00573270
 */

int __thiscall FUN_005877a0(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined1 local_24 [4];
  undefined1 local_20 [32];
  
  FUN_00515e20(local_20,0x20,&DAT_008a0dac,*(undefined4 *)(param_1 + 0x1c),
               *(undefined4 *)(param_1 + 0x24));
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar5 = FUN_005af1c0(local_20);
  iVar6 = FUN_005251a0(uVar2,uVar5);
  puVar4 = param_2;
  if (iVar6 == 0) {
    if (param_2 != (undefined4 *)0x0) {
      (**(code **)*param_2)(1);
    }
  }
  else if (param_2 != (undefined4 *)0x0) {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    FUN_00573270(iVar6);
    puVar4[5] = *(undefined4 *)(param_1 + 0xe0);
    puVar4[7] = *(undefined4 *)(param_1 + 0xf4);
    FUN_00515520(puVar4[4],puVar4 + 9,puVar4 + 10);
    FUN_00515520(puVar4[4],&param_2,local_24);
    piVar1 = puVar4 + 1;
    *(float *)(param_1 + 0xe0) =
         *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0xe0) + (float)param_2;
    piVar3 = *(int **)(param_1 + 8);
    *piVar3 = (int)piVar1;
    *(int **)(param_1 + 8) = piVar1;
    puVar4[2] = piVar3;
    *piVar1 = param_1 + 4;
    if ((*(int *)(param_1 + 0xc) == 0) && (*(int *)(param_1 + 0xc0) + 1 < *(int *)(param_1 + 0x24)))
    {
      iVar7 = *(int *)(*(int *)(param_1 + 0x2c) + 4);
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = iVar7 + -4;
      }
      *(int *)(param_1 + 0xc) = iVar7;
      FUN_00515e90(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(iVar7 + 0x10) + 0x10));
    }
    return iVar6;
  }
  return 0;
}


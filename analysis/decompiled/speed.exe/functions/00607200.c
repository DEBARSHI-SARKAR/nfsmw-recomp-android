/* speed.exe 00607200 FUN_00607200; analysis pseudocode, not buildable source.
 * calls 006070d0 FUN_006070d0
 * calls 00606e60 FUN_00606e60
 * calls 00606f00 FUN_00606f00
 * calls 00607030 FUN_00607030
 */

void FUN_00607200(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_3;
  iVar1 = param_1;
  FUN_00606e60();
  param_1 = *(undefined4 *)(iVar1 + 0x3c);
  (*(code *)puVar2[1])(*puVar2,&param_1,4,puVar2[2]);
  param_1._0_1_ = *(undefined1 *)(iVar1 + 0x44);
  (*(code *)puVar2[1])(*puVar2,&param_1,1,puVar2[2]);
  param_1._0_1_ = *(undefined1 *)(iVar1 + 0x45);
  (*(code *)puVar2[1])(*puVar2,&param_1,1,puVar2[2]);
  param_1._0_1_ = *(undefined1 *)(iVar1 + 0x46);
  (*(code *)puVar2[1])(*puVar2,&param_1,1,puVar2[2]);
  param_1 = CONCAT31(param_1._1_3_,*(undefined1 *)(iVar1 + 0x47));
  (*(code *)puVar2[1])(*puVar2,&param_1,1,puVar2[2]);
  param_1 = *(undefined4 *)(iVar1 + 0x30);
  (*(code *)puVar2[1])(*puVar2,&param_1,4,puVar2[2]);
  (*(code *)puVar2[1])(*puVar2,*(undefined4 *)(iVar1 + 0x14),*(int *)(iVar1 + 0x30) << 2,puVar2[2]);
  FUN_00606f00(iVar1);
  FUN_00607030(iVar1);
  FUN_006070d0(iVar1);
  param_1 = *(undefined4 *)(iVar1 + 0x2c);
  (*(code *)puVar2[1])(*puVar2,&param_1,4,puVar2[2]);
  (*(code *)puVar2[1])(*puVar2,*(undefined4 *)(iVar1 + 0xc),*(int *)(iVar1 + 0x2c) << 2,puVar2[2]);
  return;
}


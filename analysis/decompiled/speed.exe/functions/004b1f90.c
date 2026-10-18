/* speed.exe 004b1f90 FUN_004b1f90; analysis pseudocode, not buildable source.
 * calls 00460ed0 FUN_00460ed0
 */

void __thiscall FUN_004b1f90(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  puVar1 = (undefined4 *)(param_1 + 0x88);
  iVar2 = 0x10;
  do {
    puVar1[-0x10] = 0xffffffff;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_00460ed0(param_1 + 200,&DAT_00890978,&DAT_00890978);
  *(int *)(param_1 + 0x108) = param_1 + 200;
  FUN_00460ed0(param_1 + 300,&DAT_00890978,&DAT_00890978);
  *(int *)(param_1 + 0x16c) = param_1 + 300;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 0x170) = 0;
  return;
}


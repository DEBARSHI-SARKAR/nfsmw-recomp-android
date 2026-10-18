/* speed.exe 0079c840 FUN_0079c840; analysis pseudocode, not buildable source.
 * calls 0083e410 FUN_0083e410
 * calls 0078ffb0 FUN_0078ffb0
 * calls 00844a50 FUN_00844a50
 * calls 00794f80 FUN_00794f80
 * calls 0083e3e0 FUN_0083e3e0
 */

void __fastcall FUN_0079c840(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  puVar3 = &LAB_0079b520;
  uVar2 = 4;
  iVar1 = param_1;
  FUN_00794f80(4,&LAB_0079b520,param_1);
  FUN_0078ffb0(uVar2,puVar3,iVar1);
  iVar1 = FUN_00794f80(0x17,FUN_007962e0,param_1);
  uVar2 = FUN_00844a50(*(undefined4 *)(iVar1 + 0x38));
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  iVar1 = FUN_00794f80(0x18,&LAB_0078c110,param_1);
  uVar2 = FUN_00844a50(*(undefined4 *)(iVar1 + 0x38));
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xf0) = 0x80000000;
    FUN_0083e3e0(*(int *)(param_1 + 0xc),0,0x80000000,FUN_0079bb20);
  }
  FUN_0083e410(*(undefined4 *)(param_1 + 0xc),0,0,FUN_0079c260);
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x10d) = 0;
  return;
}


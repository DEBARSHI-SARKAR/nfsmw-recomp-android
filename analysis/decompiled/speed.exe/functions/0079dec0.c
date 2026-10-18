/* speed.exe 0079dec0 FUN_0079dec0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 0079ca30 FUN_0079ca30
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007ec1bd FUN_007ec1bd
 * calls 0079b0e0 FUN_0079b0e0
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void __fastcall FUN_0079dec0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  *(undefined4 *)(param_1 + 0x100) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x104) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x108) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x10d) = 0;
  puVar3 = &LAB_0079d140;
  iVar1 = DAT_0091cf90 + 0x134;
  iVar2 = param_1 + 0x2c;
  FUN_0079ca30(iVar2,iVar1,&LAB_0079d140,param_1);
  FUN_0079b0e0(iVar2,iVar1,puVar3,param_1);
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return;
}


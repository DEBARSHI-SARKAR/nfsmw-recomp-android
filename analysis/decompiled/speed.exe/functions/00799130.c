/* speed.exe 00799130 FUN_00799130; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 0083a980 FUN_0083a980
 * calls 0045a430 FUN_0045a430
 * calls 0083bf00 FUN_0083bf00
 * calls 0056dbe0 FUN_0056dbe0
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0056ecc0 FUN_0056ecc0
 * calls 0056f210 FUN_0056f210
 * calls 00465a70 FUN_00465a70
 * calls 004e4ea0 FUN_004e4ea0
 * calls 0067c570 FUN_0067c570
 * calls 007970b0 FUN_007970b0
 * calls 007ec1bd FUN_007ec1bd
 * calls 0056f100 FUN_0056f100
 * calls 00591160 FUN_00591160
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void __fastcall FUN_00799130(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00882778;
  local_c = ExceptionList;
  if (1 < *(int *)(DAT_0091cf90 + 0x19c)) {
    ExceptionList = &local_c;
    FUN_007ec1bd();
    InterlockedIncrement(&DAT_009b4438);
    iVar1 = FUN_0056dbe0(0xb);
    iVar1 = *(int *)(iVar1 + 0x10);
    if (*(int *)(param_1 + 0x238) != iVar1) {
      *(int *)(param_1 + 0x238) = iVar1;
      if (*(int *)(param_1 + 0x230) == 0) {
        puVar2 = (undefined1 *)FUN_00465a70(0x84,8);
        *(undefined1 **)(param_1 + 0x230) = puVar2;
        *puVar2 = 0;
      }
      iVar1 = FUN_0056ecc0(iVar1);
      uVar3 = FUN_00591160();
      FUN_0083a980(*(undefined4 *)(param_1 + 0x230),0x80,&DAT_008b6fdc,uVar3);
      FUN_004e4ea0(*(undefined4 *)(iVar1 + 8),0,0);
      local_4 = 0;
      if (*(char *)(iVar1 + 0x10) != -1) {
        puVar2 = local_20;
        FUN_0056f100(*(char *)(iVar1 + 0x10));
        FUN_0056f210(puVar2);
      }
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      FUN_0067c570(local_20,&local_2c);
      FUN_0083bf00(*(undefined4 *)(param_1 + 0x230),0x80,&DAT_008b6fd8,local_2c);
      FUN_0083bf00(*(undefined4 *)(param_1 + 0x230),0x80,&DAT_008b6fd4,local_28);
      FUN_0083bf00(*(undefined4 *)(param_1 + 0x230),0x80,&DAT_008b6fd0,local_24);
      FUN_007970b0();
      local_4 = 0xffffffff;
      FUN_0045a430();
    }
    InterlockedDecrement(&DAT_009b4438);
    FUN_007ec1c8();
  }
  ExceptionList = local_c;
  return;
}


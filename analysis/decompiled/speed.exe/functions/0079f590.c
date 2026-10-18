/* speed.exe 0079f590 FUN_0079f590; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 004647c0 FUN_004647c0
 * calls 007ec1bd FUN_007ec1bd
 * calls 0085cf40 FUN_0085cf40
 * calls 0085d140 FUN_0085d140
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void __thiscall FUN_0079f590(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined1 local_40 [64];
  
  FUN_007ec1bd();
  InterlockedIncrement((LONG *)&DAT_009b42d4);
  if (*param_1 == 0) {
    FUN_004647c0(local_40,"%s-%s-%s",&PTR_LAB_008b68a4,&DAT_008b68b0,&DAT_008b68a8);
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    iVar1 = FUN_0085d140(local_40,0xe4a,param_2,FUN_0079f0e0,0);
    *param_1 = iVar1;
    FUN_0085cf40(iVar1,0x74797065,1,0,0);
    if (DAT_00926114 != 0) {
      FUN_0085cf40(*param_1,0x74696d65,3600000,0,0);
    }
    FUN_0085cf40(*param_1,0x6d776964,0xf3,0,0);
    FUN_0085cf40(*param_1,0x6d6f7574,0x10,0,0);
  }
  InterlockedDecrement((LONG *)&DAT_009b42d4);
  FUN_007ec1c8();
  return;
}


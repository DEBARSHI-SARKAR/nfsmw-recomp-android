/* speed.exe 0079c7d0 FUN_0079c7d0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 0083e3e0 FUN_0083e3e0
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

void __thiscall FUN_0079c7d0(int param_1,uint param_2,char param_3)

{
  FUN_007ec1bd();
  InterlockedIncrement(&DAT_009b4438);
  if ((*(int *)(param_1 + 0xc) != 0) && (-1 < (int)param_2)) {
    param_2 = (param_3 != '\x01') - 1 & 0x80000000 | param_2;
    *(uint *)(param_1 + 0xf0) = param_2;
    FUN_0083e3e0(*(int *)(param_1 + 0xc),0,param_2,FUN_0079bb20);
  }
  InterlockedDecrement(&DAT_009b4438);
  FUN_007ec1c8();
  return;
}


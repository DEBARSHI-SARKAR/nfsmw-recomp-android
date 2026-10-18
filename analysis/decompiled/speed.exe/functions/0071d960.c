/* speed.exe 0071d960 FUN_0071d960; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 00713b20 FUN_00713b20
 * calls 0045da70 FUN_0045da70
 */

int FUN_0071d960(int param_1)

{
  byte bVar1;
  int iVar2;
  int local_8;
  int local_4;
  
  iVar2 = DAT_00993cc8;
  if (DAT_00993cc8 != 0) {
    if (param_1 < 1) {
      FUN_0045da70(0x40c00000);
      param_1 = FUN_007c4b80();
    }
    if (((int)*(char *)(*(int *)(iVar2 + 0x184) + 0xb0) <= *(int *)(iVar2 + 0x104)) ||
       (*(float *)(*(int *)(iVar2 + 0x184) + 0x94) <= *(float *)(iVar2 + 0x140))) {
      bVar1 = 1;
    }
    else {
      bVar1 = 0;
    }
    local_4 = bVar1 + 1;
    local_8 = param_1;
    FUN_00713b20(8,&local_8,&PTR_s_AnytimeEvents_LostSuspect_00901e1c,&DAT_009924ec,0);
    return local_8;
  }
  return 0;
}


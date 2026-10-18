/* speed.exe 00718e60 FUN_00718e60; analysis pseudocode, not buildable source.
 * calls 007050d0 FUN_007050d0
 * calls 00713b20 FUN_00713b20
 */

void __fastcall FUN_00718e60(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 local_8;
  int local_4;
  
  cVar2 = FUN_007050d0();
  if ((cVar2 != '\0') && (DAT_00993cc8 != 0)) {
    local_8 = *(undefined4 *)(param_1 + 0xc);
    if (((int)*(char *)(*(int *)(DAT_00993cc8 + 0x184) + 0xb0) <= *(int *)(DAT_00993cc8 + 0x104)) ||
       (*(float *)(*(int *)(DAT_00993cc8 + 0x184) + 0x94) <= *(float *)(DAT_00993cc8 + 0x140))) {
      bVar1 = 1;
    }
    else {
      bVar1 = 0;
    }
    local_4 = bVar1 + 1;
    FUN_00713b20(8,&local_8,&PTR_s_Arrest_BullhornArrest_00901d8c,&DAT_00992454,param_1);
  }
  return;
}


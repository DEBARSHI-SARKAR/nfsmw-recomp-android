/* speed.exe 00718090 FUN_00718090; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00718090(int *param_1)

{
  float10 fVar1;
  int local_c [3];
  
  if (DAT_00993cc8 != 0) {
    if (*(float *)(DAT_00993cc8 + 0x164) < *(float *)(*(int *)(DAT_00993cc8 + 0x184) + 0x7c)) {
      fVar1 = (float10)(**(code **)(*param_1 + 0x1e4))();
      if ((float10)_DAT_00890968 != fVar1) {
        (**(code **)(*param_1 + 0x140))();
        return;
      }
      (**(code **)(*param_1 + 0xd8))();
      return;
    }
    local_c[1] = 1;
    if (_DAT_00894d58 <= *(float *)(DAT_00993cc8 + 0x164)) {
      local_c[1] = 2;
    }
    local_c[0] = param_1[3];
    local_c[2] = ((*(uint *)(DAT_00993cc8 + 0x54) >> 0xb & 1) != 0) + 1;
    FUN_00713b20(0xc,local_c,&PTR_s_Setup_ReInitPursuit_00901c14,&DAT_009923d4,param_1);
  }
  return;
}


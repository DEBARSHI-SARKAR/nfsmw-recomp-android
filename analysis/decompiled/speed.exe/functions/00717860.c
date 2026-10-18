/* speed.exe 00717860 FUN_00717860; analysis pseudocode, not buildable source.
 * calls 00713b20 FUN_00713b20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00717860(int param_1)

{
  float fVar1;
  float10 fVar2;
  undefined4 local_8;
  undefined4 uStack_4;
  
  if ((DAT_00993cc8 != 0) && (*(int **)(DAT_00993cc8 + 0x130) != (int *)0x0)) {
    local_8 = *(undefined4 *)(param_1 + 0xc);
    fVar2 = (float10)(**(code **)(**(int **)(DAT_00993cc8 + 0x130) + 0x120))();
    fVar1 = (float)fVar2;
    if ((fVar2 <= (float10)_DAT_008b0e78) || (_DAT_00894b64 <= fVar1)) {
      if ((fVar1 <= _DAT_00894b64) || (_DAT_00891184 <= fVar1)) {
        if ((fVar1 <= _DAT_00891184) || (_DAT_0089198c <= fVar1)) {
          if ((fVar1 <= _DAT_0089198c) || (_DAT_00890fc8 <= fVar1)) {
            if ((fVar1 <= _DAT_00890fc8) || (_DAT_008b265c <= fVar1)) {
              if (fVar1 <= _DAT_008b265c) {
                return;
              }
              uStack_4 = 0x20;
            }
            else {
              uStack_4 = 0x10;
            }
          }
          else {
            uStack_4 = 8;
          }
        }
        else {
          uStack_4 = 4;
        }
      }
      else {
        uStack_4 = 2;
      }
    }
    else {
      uStack_4 = 1;
    }
    FUN_00713b20(8,&local_8,&PTR_s_Backup_DispBUETA_00901ca4,&DAT_00992464,param_1);
  }
  return;
}


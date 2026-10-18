/* speed.exe 007e6e60 ___multtenpow12; analysis pseudocode, not buildable source.
 * calls 007d6cb0 __security_check_cookie
 * calls 007e6a70 ___ld12mul
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Library Function - Single Match
    ___multtenpow12
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

void ___multtenpow12(undefined2 *param_1,uint param_2,int param_3)

{
  uint uVar1;
  ushort *local_20;
  ushort local_18;
  undefined4 uStack_16;
  undefined2 uStack_12;
  undefined4 local_10;
  undefined4 local_c;
  undefined *local_8;
  
  local_c = DAT_00906980;
  local_8 = &DAT_009073a0;
  if (param_2 != 0) {
    if ((int)param_2 < 0) {
      param_2 = -param_2;
      local_8 = &DAT_00907500;
    }
    uStack_16 = CONCAT22(uStack_16._2_2_,(undefined2)uStack_16);
    if (param_3 == 0) {
      *param_1 = 0;
      uStack_16 = CONCAT22(uStack_16._2_2_,(undefined2)uStack_16);
    }
    while (param_2 != 0) {
      local_8 = local_8 + 0x54;
      uVar1 = param_2 & 7;
      param_2 = (int)param_2 >> 3;
      if (uVar1 != 0) {
        local_20 = (ushort *)(local_8 + uVar1 * 0xc);
        if (0x7fff < *local_20) {
          local_18 = (ushort)*(undefined4 *)local_20;
          uStack_16._0_2_ = (undefined2)((uint)*(undefined4 *)local_20 >> 0x10);
          uStack_16._2_2_ = (undefined2)*(undefined4 *)(local_20 + 2);
          uStack_12 = (undefined2)((uint)*(undefined4 *)(local_20 + 2) >> 0x10);
          local_10 = *(undefined4 *)(local_20 + 4);
          uStack_16 = CONCAT22(uStack_16._2_2_,(undefined2)uStack_16) + -1;
          local_20 = &local_18;
        }
        ___ld12mul(param_1,local_20);
      }
    }
  }
  return;
}


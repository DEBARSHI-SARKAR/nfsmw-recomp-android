/* speed.exe 007d9e70 __decomp; analysis pseudocode, not buildable source.
 * calls 007d9d20 __set_exp
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    __decomp
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

float10 __decomp(uint param_1,uint param_2,int *param_3)

{
  double dVar1;
  int iVar2;
  float10 fVar3;
  double local_14;
  int local_8;
  
  if ((double)CONCAT26(param_2._2_2_,CONCAT24((ushort)param_2,param_1)) == _DAT_008942e0) {
    local_14 = _DAT_008942e0;
    local_8 = 0;
  }
  else if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
    local_8 = -0x3fd;
    dVar1 = (double)CONCAT26(param_2._2_2_,CONCAT24((ushort)param_2,param_1));
    while ((param_2._2_2_ & 0x10) == 0) {
      iVar2 = CONCAT22(param_2._2_2_,(ushort)param_2) << 1;
      param_2._0_2_ = (ushort)iVar2;
      param_2._2_2_ = (ushort)((uint)iVar2 >> 0x10);
      if ((param_1 & 0x80000000) != 0) {
        param_2._0_2_ = (ushort)param_2 | 1;
      }
      param_1 = param_1 << 1;
      local_8 = local_8 + -1;
    }
    param_2._2_2_ = param_2._2_2_ & 0xffef;
    if (dVar1 < _DAT_008942e0) {
      param_2._2_2_ = param_2._2_2_ | 0x8000;
    }
    fVar3 = (float10)__set_exp(CONCAT26(param_2._2_2_,CONCAT24((ushort)param_2,param_1)),0);
    local_14 = (double)fVar3;
  }
  else {
    fVar3 = (float10)__set_exp(CONCAT26(param_2._2_2_,CONCAT24((ushort)param_2,param_1)),0);
    local_14 = (double)fVar3;
    local_8 = (short)((int)(param_2._2_2_ & 0x7ff0) >> 4) + -0x3fe;
  }
  *param_3 = local_8;
  return (float10)local_14;
}


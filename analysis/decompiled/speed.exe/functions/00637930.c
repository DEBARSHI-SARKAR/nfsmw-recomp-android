/* speed.exe 00637930 FUN_00637930; analysis pseudocode, not buildable source.
 * calls 005cb670 FUN_005cb670
 * calls 005d51f0 FUN_005d51f0
 * calls 006200f0 FUN_006200f0
 * calls 0061fdc0 FUN_0061fdc0
 */

void __fastcall FUN_00637930(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  float10 fVar3;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  undefined1 auStack_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00878b68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a6714;
  local_4 = 0;
  if (param_1[7] != 0) {
    iVar1 = FUN_005cb670();
    if (iVar1 != 2) goto LAB_00637a61;
  }
  if (param_1[8] != 0) {
    iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,param_1[8]);
    if ((iVar1 != 0) && (*(int **)(iVar1 + 4) != (int *)0x0)) {
      piVar2 = (int *)(**(code **)(**(int **)(iVar1 + 4) + 0x54))();
      if (piVar2 != (int *)0x0) {
        fStack_58 = (float)param_1[2];
        fStack_54 = (float)param_1[3];
        fStack_50 = (float)param_1[4];
        if (param_1[5] == 0) {
          if ((param_1[6] != 0) && (param_1[9] != 0)) {
            FUN_006200f0(auStack_4c,0,0);
            FUN_0061fdc0(auStack_4c);
          }
        }
        else {
          (**(code **)(*piVar2 + 0xa0))(&fStack_58,0);
        }
        fVar3 = (float10)(**(code **)(*piVar2 + 0x18))();
        fStack_58 = (float)((float10)fStack_58 * fVar3);
        fStack_54 = (float)((float10)fStack_54 * fVar3);
        fStack_50 = (float)((float10)fStack_50 * fVar3);
        (**(code **)(*piVar2 + 0x8c))(&fStack_58);
      }
      *param_1 = &PTR_LAB_008a66f8;
      ExceptionList = local_c;
      return;
    }
  }
LAB_00637a61:
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}


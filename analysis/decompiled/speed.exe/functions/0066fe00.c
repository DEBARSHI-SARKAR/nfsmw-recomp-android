/* speed.exe 0066fe00 FUN_0066fe00; analysis pseudocode, not buildable source.
 * calls 0048b5a0 FUN_0048b5a0
 * calls 0048c100 FUN_0048c100
 * calls 005d59f0 FUN_005d59f0
 */

void __thiscall
FUN_0066fe00(int param_1,int *param_2,undefined4 param_3,float param_4,float *param_5)

{
  char cVar1;
  int *piVar2;
  float *pfVar3;
  undefined4 uVar4;
  float10 fVar5;
  undefined4 unaff_retaddr;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 auStack_fc [4];
  undefined1 auStack_f8 [4];
  undefined1 auStack_f4 [60];
  undefined1 auStack_b8 [112];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [56];
  
  piVar2 = (int *)FUN_005d59f0(&LAB_006680f0);
  if (piVar2 != (int *)0x0) {
    fVar5 = (float10)(**(code **)(*param_2 + 0x14))();
    pfVar3 = (float *)(**(code **)(*param_2 + 0x20))();
    if ((pfVar3[2] - param_5[2]) * (pfVar3[2] - param_5[2]) +
        (pfVar3[1] - param_5[1]) * (pfVar3[1] - param_5[1]) +
        (*pfVar3 - *param_5) * (*pfVar3 - *param_5) <
        (float)(fVar5 + (float10)param_4) * (float)(fVar5 + (float10)param_4)) {
      (**(code **)(*param_2 + 0x4c))(auStack_fc);
      (**(code **)(*param_2 + 0x40))(auStack_f4);
      puVar8 = &DAT_008a2fb4;
      uVar7 = 1;
      puVar6 = &stack0xfffffefc;
      uVar4 = (**(code **)(*param_2 + 0x20))(puVar6,1,&DAT_008a2fb4);
      FUN_0048b5a0(auStack_f8,uVar4,puVar6,uVar7,puVar8);
      cVar1 = FUN_0048c100(auStack_b8,param_5,auStack_b8);
      if (cVar1 != '\0') {
        if (param_1 == 0) {
          param_1 = 0;
        }
        else {
          param_1 = param_1 + 0xac;
        }
        (**(code **)(*piVar2 + 4))(auStack_38,auStack_48,unaff_retaddr,param_1);
      }
    }
  }
  return;
}


/* speed.exe 006a4c80 FUN_006a4c80; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 0048b5a0 FUN_0048b5a0
 * calls 0048c100 FUN_0048c100
 */

void FUN_006a4c80(undefined4 param_1,int *param_2,float param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  float10 fVar8;
  undefined4 uStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  undefined1 auStack_fc [12];
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [176];
  
  piVar2 = (int *)FUN_005d59f0(&LAB_0068cc70);
  if ((piVar2 != (int *)0x0) && (piVar3 = (int *)FUN_005d59f0(&LAB_00404040), piVar3 != (int *)0x0))
  {
    uVar4 = (**(code **)(*piVar3 + 8))();
    uVar7 = 0;
    if (uVar4 != 0) {
      do {
        cVar1 = (**(code **)(*piVar3 + 0x24))(uVar7);
        if ((cVar1 != '\0') && (iVar5 = (**(code **)(*piVar2 + 4))(uVar7), iVar5 == 0)) {
          pfVar6 = (float *)(**(code **)(*param_2 + 0x24))();
          fStack_108 = param_3 * *pfVar6;
          fStack_104 = param_3 * pfVar6[1];
          fStack_100 = param_3 * pfVar6[2];
          (**(code **)(*param_2 + 0x40))(auStack_f0);
          (**(code **)(*piVar3 + 0x14))(&fStack_100,uVar7);
          fVar8 = (float10)(**(code **)(*piVar3 + 0x68))(uVar7);
          fStack_110 = (float)fVar8;
          fStack_10c = (float)fVar8;
          uStack_114 = 0x3e19999a;
          FUN_0048b5a0(auStack_f0,auStack_fc,&uStack_114,1,&fStack_108);
          cVar1 = FUN_0048c100(param_1,auStack_b0,auStack_b0);
          if (cVar1 != '\0') {
            (**(code **)(*piVar2 + 0xc))(uVar7);
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar4);
    }
  }
  return;
}


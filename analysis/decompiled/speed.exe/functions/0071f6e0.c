/* speed.exe 0071f6e0 FUN_0071f6e0; analysis pseudocode, not buildable source.
 * calls 005fbd20 FUN_005fbd20
 * calls 0070e570 FUN_0070e570
 * calls 007153b0 FUN_007153b0
 * calls 00717420 FUN_00717420
 * calls 007c4b80 FUN_007c4b80
 * calls 005d59f0 FUN_005d59f0
 * calls 0071d960 FUN_0071d960
 * calls 00713b20 FUN_00713b20
 * calls 0071d8f0 FUN_0071d8f0
 * calls 0045da70 FUN_0045da70
 */

void __thiscall FUN_0071f6e0(int param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (param_2 != 1) {
    bVar1 = false;
    iVar6 = DAT_0092ce9c;
    bVar2 = false;
    if (DAT_0092ce9c != DAT_0092ce9c + DAT_0092cea4 * 4) {
      do {
        bVar1 = bVar2;
        piVar4 = (int *)FUN_005d59f0(&LAB_00404ff0);
        if ((piVar4 != (int *)0x0) && (cVar3 = (**(code **)(*piVar4 + 4))(), cVar3 != '\0')) {
          bVar1 = true;
        }
        iVar6 = iVar6 + 4;
        bVar2 = bVar1;
      } while (iVar6 != DAT_0092ce9c + DAT_0092cea4 * 4);
    }
    FUN_0070e570();
    if (!bVar1) {
      FUN_0071d960((int)DAT_00992264);
    }
    FUN_00717420();
    *(undefined4 *)(param_1 + 0x138) = 0x29a;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    *(uint *)(param_1 + 0x54) = *(uint *)(param_1 + 0x54) & 0xfffffdff;
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x20c) + 0xc))(999);
  if ((*(int *)(DAT_0091e000 + 0x1968) == 0) || (cVar3 = FUN_005fbd20(), cVar3 == '\0')) {
    if (DAT_00992230 != (int *)0x0) {
      (**(code **)(*DAT_00992230 + 0x48))();
    }
    FUN_0070e570();
  }
  piVar4 = (int *)FUN_007153b0(0,0);
  if (piVar4 == (int *)0x0) {
    if (DAT_00993cc8 != 0) {
      FUN_0045da70(0x40c00000);
      FUN_007c4b80();
      FUN_00713b20(8,&stack0xfffffff4,&PTR_s_AnytimeEvents_Bailout_00901e64,&DAT_009925dc,0);
    }
    *(undefined4 *)(param_1 + 0x138) = 999;
    return;
  }
  uVar5 = (**(code **)(*piVar4 + 0x30))();
  FUN_0071d8f0(uVar5);
  *(undefined4 *)(param_1 + 0x138) = 999;
  return;
}


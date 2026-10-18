/* speed.exe 006c58c0 FUN_006c58c0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 00503400 FUN_00503400
 * calls 007e7d5e D3DXMatrixMultiply
 * calls 00460bf0 FUN_00460bf0
 */

void __fastcall FUN_006c58c0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int *piStack_78;
  int *piStack_74;
  undefined4 uStack_70;
  int *piStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  uStack_64 = 0;
  uStack_68 = 1;
  piStack_6c = (int *)0x8af2ac;
  uStack_70 = 0x6c58dc;
  piStack_6c = (int *)FUN_00460bf0();
  uStack_70 = 0x6c58e5;
  piVar2 = (int *)FUN_00503400();
  piStack_6c = *(int **)(DAT_00982c80 + 0x48);
  uStack_64 = *(undefined4 *)(*piVar2 + 0x18);
  uStack_68 = *(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0x7f4);
  uStack_70 = 0x6c590a;
  (**(code **)(*piStack_6c + 0xd0))();
  piStack_78 = *(int **)(DAT_00982c80 + 0x48);
  piStack_74 = *(int **)(*(int *)(DAT_00982c80 + 0x44) + 0x7a4);
  uStack_70 = DAT_0093d068;
  uStack_7c = 0x6c592d;
  (**(code **)(*piStack_78 + 0xd0))();
  uStack_80 = *(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0xaec);
  uStack_7c = DAT_00982a6c;
  (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0xd0))(*(int **)(DAT_00982c80 + 0x48));
  if (*(char *)(param_1 + 0x40) == '\0') {
    uStack_70 = 0;
    piStack_6c = (int *)0x0;
    uStack_68 = 0;
    uStack_64 = 0;
    piStack_74 = (int *)0x3f000000;
    if (&DAT_009195e0 + *(int *)(DAT_00982a20 + 4) * 0x1c != (int *)0x0) {
      D3DXMatrixMultiply(&piStack_74,(&DAT_009195e0)[*(int *)(DAT_00982a20 + 4) * 0x1c] + 0x40,
                         &piStack_74);
      piStack_78 = piStack_74;
      uStack_68 = uStack_64;
      (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x98))
                (*(int **)(DAT_00982c80 + 0x48),
                 *(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0xac4),&uStack_80);
    }
    piVar2 = DAT_00982bdc;
    iVar1 = *DAT_00982bdc;
    iVar3 = FUN_007c4b80();
    uVar4 = FUN_007c4b80();
    uVar5 = FUN_007c4b80();
    (**(code **)(iVar1 + 0xe4))(piVar2,0x3c,(iVar3 << 8 | uVar4) << 8 | uVar5);
    return;
  }
  uVar6 = FUN_00460bf0("HEADLIGHTS",1,0);
  piVar2 = (int *)FUN_00503400(uVar6);
  (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0xd0))
            (*(int **)(DAT_00982c80 + 0x48),*(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0x7f4),
             *(undefined4 *)(*piVar2 + 0x18));
  (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0xd0))
            (*(int **)(DAT_00982c80 + 0x48),*(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0x7a4),
             DAT_0093d068);
  (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0xd0))
            (*(int **)(DAT_00982c80 + 0x48),*(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0xaec),
             DAT_00982a6c);
  (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x78))
            (*(int **)(DAT_00982c80 + 0x48),*(undefined4 *)(*(int *)(DAT_00982c80 + 0x44) + 0xb14),
             0x3dcccccd);
  return;
}


/* speed.exe 0052e450 FUN_0052e450; analysis pseudocode, not buildable source.
 * calls 0056db00 FUN_0056db00
 * calls 006547a0 FUN_006547a0
 * calls 0056bc10 FUN_0056bc10
 * calls 005252d0 FUN_005252d0
 */

void __fastcall FUN_0052e450(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 local_10 [16];
  
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  iVar1 = (uint)*(ushort *)(param_1 + 0x2c) * 0x38 + 0x9b0c + *(int *)(DAT_0091cf90 + 0x10);
  uVar3 = FUN_0056bc10(0xe21d083c,*(int *)(DAT_0091cf90 + 0x10) + 0x314);
  FUN_005252d0(uVar2,0x1232703a,uVar3);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = FUN_0056db00();
  uVar3 = FUN_0056bc10(0x6031106e,uVar3);
  FUN_005252d0(uVar2,0xeb406fec,uVar3);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = FUN_0056bc10(0xa656cd29,iVar1);
  FUN_005252d0(uVar2,0xd91934e7,uVar3);
  FUN_006547a0(local_10,0);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x9068c46d,&DAT_008941f8,local_10);
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x9068c46e,&DAT_0089c2d0,
               *(undefined4 *)(iVar1 + 0x18));
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x9068c46f,&DAT_0089c2d0,
               *(undefined4 *)(iVar1 + 0x1c));
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x9068c470,&DAT_0089c2d0,
               *(undefined4 *)(iVar1 + 0x20));
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x9068c471,&DAT_0089c2d0,
               *(undefined4 *)(iVar1 + 0x24));
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x9068c472,&DAT_0089c2d0,
               *(undefined4 *)(iVar1 + 0x28));
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x9068c473,&DAT_0089c2d0,
               *(undefined4 *)(iVar1 + 0x2c));
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x9068c474,&DAT_0089c2d0,
               *(undefined4 *)(iVar1 + 0x30));
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x9068c475,&DAT_0089c2d0,
               *(undefined4 *)(iVar1 + 0x34));
  FUN_005252d0(*(undefined4 *)(param_1 + 0x10),0x9d81523d,&DAT_0089c2d0,
               *(undefined4 *)(iVar1 + 0x10));
  return;
}


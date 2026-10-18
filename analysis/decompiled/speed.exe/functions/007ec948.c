/* speed.exe 007ec948 FUN_007ec948; analysis pseudocode, not buildable source.
 * calls 007ec8ef FUN_007ec8ef
 * calls 007f0df9 FUN_007f0df9
 * calls EXTERNAL:0000008e GetSystemInfo
 * calls 007ec926 FUN_007ec926
 */

/* WARNING: Removing unreachable block (ram,0x007ecb07) */
/* WARNING: Removing unreachable block (ram,0x007ecac9) */
/* WARNING: Removing unreachable block (ram,0x007ecaa0) */
/* WARNING: Removing unreachable block (ram,0x007eca6f) */
/* WARNING: Removing unreachable block (ram,0x007eca2e) */
/* WARNING: Removing unreachable block (ram,0x007ec98d) */

undefined2 FUN_007ec948(void)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  undefined2 in_FPUControlWord;
  _SYSTEM_INFO local_44;
  
  FUN_007f0df9(&DAT_009bb0c8,0x38);
  iVar5 = FUN_007ec8ef();
  if (iVar5 == 0) {
    iVar5 = FUN_007ec926();
    DAT_009bb0d8 = DAT_009bb0d8 ^ (iVar5 << 0x1a ^ DAT_009bb0d8) & 0x4000000;
  }
  else {
    GetSystemInfo(&local_44);
    DAT_009bb0d4 = local_44.dwNumberOfProcessors;
    piVar1 = (int *)cpuid_basic_info(0);
    DAT_009bb0dc = piVar1[1];
    DAT_009bb0e0 = piVar1[2];
    DAT_009bb0e4 = piVar1[3];
    DAT_009bb0e8 = 0;
    if (0 < *piVar1) {
      iVar5 = 0xd;
      bVar9 = true;
      iVar6 = iVar5;
      pcVar7 = (char *)&DAT_009bb0dc;
      pcVar8 = "GenuineIntel";
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        bVar9 = *pcVar7 == *pcVar8;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      } while (bVar9);
      if (bVar9) {
        DAT_009bb0d8._3_1_ = DAT_009bb0d8._3_1_ | 1;
        DAT_009bb0d8 = (uint)DAT_009bb0d8._3_1_ << 0x18;
      }
      else {
        bVar9 = true;
        iVar6 = iVar5;
        pcVar7 = (char *)&DAT_009bb0dc;
        pcVar8 = "AuthenticAMD";
        do {
          if (iVar6 == 0) break;
          iVar6 = iVar6 + -1;
          bVar9 = *pcVar7 == *pcVar8;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        } while (bVar9);
        if (bVar9) {
          DAT_009bb0d8._3_1_ = DAT_009bb0d8._3_1_ | 2;
          DAT_009bb0d8 = (uint)DAT_009bb0d8._3_1_ << 0x18;
        }
        else {
          bVar9 = true;
          iVar6 = iVar5;
          pcVar7 = (char *)&DAT_009bb0dc;
          pcVar8 = "CyrixInstead";
          do {
            if (iVar6 == 0) break;
            iVar6 = iVar6 + -1;
            bVar9 = *pcVar7 == *pcVar8;
            pcVar7 = pcVar7 + 1;
            pcVar8 = pcVar8 + 1;
          } while (bVar9);
          if (bVar9) {
            DAT_009bb0d8._3_1_ = DAT_009bb0d8._3_1_ | 4;
            DAT_009bb0d8 = (uint)DAT_009bb0d8._3_1_ << 0x18;
          }
          else {
            bVar9 = true;
            pcVar7 = (char *)&DAT_009bb0dc;
            pcVar8 = "CentaurHauls";
            do {
              if (iVar5 == 0) break;
              iVar5 = iVar5 + -1;
              bVar9 = *pcVar7 == *pcVar8;
              pcVar7 = pcVar7 + 1;
              pcVar8 = pcVar8 + 1;
            } while (bVar9);
            if (bVar9) {
              DAT_009bb0d8._3_1_ = DAT_009bb0d8._3_1_ | 8;
              DAT_009bb0d8 = (uint)DAT_009bb0d8._3_1_ << 0x18;
            }
          }
        }
      }
      uVar4 = DAT_009bb0d8;
      piVar2 = (int *)cpuid_Version_info(1);
      iVar5 = *piVar2;
      DAT_009bb0d8 = CONCAT31(DAT_009bb0d8._1_3_,(char)((uint)iVar5 >> 8)) & 0xffffff0f;
      DAT_009bb0d8 = CONCAT13(DAT_009bb0d8._3_1_,CONCAT12((char)iVar5,(undefined2)DAT_009bb0d8)) &
                     0xff0fffff;
      DAT_009bb0d8 = CONCAT22(DAT_009bb0d8._2_2_,
                              CONCAT11((char)(iVar5 >> 4),(undefined1)DAT_009bb0d8)) & 0xffff0fff;
      puVar3 = (uint *)cpuid(0x80000000);
      if (((uVar4 & 0x2000000) != 0) && (0x80000000 < *puVar3)) {
        iVar5 = cpuid(0x80000001);
        DAT_009bb0d0 = DAT_009bb0d0 | *(uint *)(iVar5 + 8) & 0x80400000;
      }
      uVar4 = DAT_009bb0d0;
      iVar5 = cpuid_Version_info(1);
      DAT_009bb0d0 = DAT_009bb0d0 | *(uint *)(iVar5 + 8) & 0x6000000;
      if ((DAT_009bb0d0 & 0x2000000) != 0) {
        DAT_009bb0d0 = CONCAT13(DAT_009bb0d0._3_1_,(int3)uVar4) | 0x400000;
      }
      if (1 < *piVar1) {
        cpuid_cache_tlb_info(2);
      }
    }
  }
  return in_FPUControlWord;
}


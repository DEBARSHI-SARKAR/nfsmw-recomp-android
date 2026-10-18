/* speed.exe 006caf90 FUN_006caf90; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls EXTERNAL:0000001e SetProcessAffinityMask
 * calls EXTERNAL:00000003 GetCurrentProcess
 * calls EXTERNAL:0000001d SetThreadPriority
 * calls EXTERNAL:00000047 QueryPerformanceCounter
 * calls EXTERNAL:0000001f Sleep
 * calls EXTERNAL:00000002 GetCurrentThread
 * calls EXTERNAL:0000001a GetThreadPriority
 * calls EXTERNAL:00000001 GetPriorityClass
 * calls EXTERNAL:0000001c SetPriorityClass
 * calls EXTERNAL:00000048 QueryPerformanceFrequency
 * calls EXTERNAL:0000001b GetProcessAffinityMask
 */

/* WARNING: Removing unreachable block (ram,0x006cafe9) */

undefined8 FUN_006caf90(DWORD param_1)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  HANDLE hProcess;
  HANDLE hThread;
  DWORD dwPriorityClass;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  uint uVar4;
  undefined8 uVar5;
  DWORD_PTR local_34;
  ULONG_PTR local_30;
  uint local_2c;
  LARGE_INTEGER local_28;
  LARGE_INTEGER local_20;
  LARGE_INTEGER local_18;
  undefined4 local_10;
  undefined4 local_c;
  undefined8 local_8;
  
  uVar2 = param_1 - 1;
  if (param_1 == 0) {
    if ((-1 < DAT_0098291c) &&
       ((uVar5 = CONCAT44(DAT_0098291c,DAT_00982918), 0 < DAT_0098291c ||
        (uVar5 = CONCAT44(DAT_0098291c,DAT_00982918), DAT_00982918 != 0)))) {
LAB_006cb185:
      DAT_0098291c = (int)((ulonglong)uVar5 >> 0x20);
      DAT_00982918 = (int)uVar5;
      return uVar5;
    }
  }
  else {
    uVar4 = (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4(param_1,1) * 0x800 |
            (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)uVar2 < 0) * 0x80 |
            (uint)(uVar2 == 0) * 0x40 | (uint)(in_AF & 1) * 0x10 |
            (uint)((POPCOUNT(uVar2 & 0xff) & 1U) == 0) * 4 | (uint)(param_1 == 0) |
            (uint)(in_ID & 1) * 0x200000 | (uint)(in_VIP & 1) * 0x100000 |
            (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
    uVar2 = uVar4 ^ 0x200000;
    if (((uint)((uVar2 & 0x4000) != 0) * 0x4000 | (uint)((uVar2 & 0x800) != 0) * 0x800 |
         (uint)((uVar2 & 0x200) != 0) * 0x200 | (uint)((uVar2 & 0x100) != 0) * 0x100 |
         (uint)((uVar2 & 0x80) != 0) * 0x80 | (uint)((uVar2 & 0x40) != 0) * 0x40 |
         (uint)((uVar2 & 0x10) != 0) * 0x10 | (uint)((uVar2 & 4) != 0) * 4 |
         (uint)((uVar2 & 1) != 0) | (uint)((uVar2 & 0x200000) != 0) * 0x200000 |
        (uint)((uVar2 & 0x40000) != 0) * 0x40000) != uVar4) {
      iVar1 = cpuid_Version_info(1);
      local_2c = *(uint *)(iVar1 + 8);
      if (((local_2c & 0x10) != 0) && (BVar3 = QueryPerformanceFrequency(&local_18), BVar3 != 0)) {
        hProcess = GetCurrentProcess();
        hThread = GetCurrentThread();
        dwPriorityClass = GetPriorityClass(hProcess);
        local_2c = GetThreadPriority(hThread);
        GetProcessAffinityMask(hProcess,&local_34,&local_30);
        SetPriorityClass(hProcess,0x100);
        SetThreadPriority(hThread,0xf);
        BVar3 = SetProcessAffinityMask(hProcess,1);
        if (BVar3 == 0) {
          cpuid_basic_info(0);
        }
        else if (BVar3 == 1) {
          cpuid_Version_info(1);
        }
        else if (BVar3 == 2) {
          cpuid_cache_tlb_info(2);
        }
        else if (BVar3 == 3) {
          cpuid_serial_info(3);
        }
        else if (BVar3 == 4) {
          cpuid_Deterministic_Cache_Parameters_info(4);
        }
        else if (BVar3 == 5) {
          cpuid_MONITOR_MWAIT_Features_info(5);
        }
        else if (BVar3 == 6) {
          cpuid_Thermal_Power_Management_info(6);
        }
        else if (BVar3 == 7) {
          cpuid_Extended_Feature_Enumeration_info(7);
        }
        else if (BVar3 == 9) {
          cpuid_Direct_Cache_Access_info(9);
        }
        else if (BVar3 == 10) {
          cpuid_Architectural_Performance_Monitoring_info(10);
        }
        else if (BVar3 == 0xb) {
          cpuid_Extended_Topology_info(0xb);
        }
        else if (BVar3 == 0xd) {
          cpuid_Processor_Extended_States_info(0xd);
        }
        else if (BVar3 == 0xf) {
          cpuid_Quality_of_Service_info(0xf);
        }
        else if (BVar3 == -0x7ffffffe) {
          cpuid_brand_part1_info(0x80000002);
        }
        else if (BVar3 == -0x7ffffffd) {
          cpuid_brand_part2_info(0x80000003);
        }
        else if (BVar3 == -0x7ffffffc) {
          cpuid_brand_part3_info(0x80000004);
        }
        else {
          cpuid(BVar3);
        }
        QueryPerformanceCounter(&local_20);
        uVar5 = rdtsc();
        local_8._4_4_ = (uint)((ulonglong)uVar5 >> 0x20);
        local_8._0_4_ = (undefined4)uVar5;
        Sleep(param_1);
        QueryPerformanceCounter(&local_28);
        uVar5 = rdtsc();
        local_c = (undefined4)((ulonglong)uVar5 >> 0x20);
        local_10 = (undefined4)uVar5;
        SetProcessAffinityMask(hProcess,local_34);
        SetThreadPriority(hThread,local_2c);
        SetPriorityClass(hProcess,dwPriorityClass);
        local_8._4_4_ = local_18.s.HighPart & 0x80000000;
        local_8._0_4_ = 0;
        local_8 = FUN_007c4b80();
        uVar5 = FUN_007c4b80();
        goto LAB_006cb185;
      }
    }
  }
  return 0;
}


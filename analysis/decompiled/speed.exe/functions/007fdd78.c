/* speed.exe 007fdd78 FUN_007fdd78; analysis pseudocode, not buildable source.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_007fdd78(undefined4 *param_1)

{
  undefined8 uVar1;
  int in_EAX;
  
  if (in_EAX == 0) {
    cpuid_basic_info(0);
  }
  else if (in_EAX == 1) {
    cpuid_Version_info(1);
  }
  else if (in_EAX == 2) {
    cpuid_cache_tlb_info(2);
  }
  else if (in_EAX == 3) {
    cpuid_serial_info(3);
  }
  else if (in_EAX == 4) {
    cpuid_Deterministic_Cache_Parameters_info(4);
  }
  else if (in_EAX == 5) {
    cpuid_MONITOR_MWAIT_Features_info(5);
  }
  else if (in_EAX == 6) {
    cpuid_Thermal_Power_Management_info(6);
  }
  else if (in_EAX == 7) {
    cpuid_Extended_Feature_Enumeration_info(7);
  }
  else if (in_EAX == 9) {
    cpuid_Direct_Cache_Access_info(9);
  }
  else if (in_EAX == 10) {
    cpuid_Architectural_Performance_Monitoring_info(10);
  }
  else if (in_EAX == 0xb) {
    cpuid_Extended_Topology_info(0xb);
  }
  else if (in_EAX == 0xd) {
    cpuid_Processor_Extended_States_info(0xd);
  }
  else if (in_EAX == 0xf) {
    cpuid_Quality_of_Service_info(0xf);
  }
  else if (in_EAX == -0x7ffffffe) {
    cpuid_brand_part1_info(0x80000002);
  }
  else if (in_EAX == -0x7ffffffd) {
    cpuid_brand_part2_info(0x80000003);
  }
  else if (in_EAX == -0x7ffffffc) {
    cpuid_brand_part3_info(0x80000004);
  }
  else {
    cpuid(in_EAX);
  }
  uVar1 = rdtsc();
  *param_1 = (int)uVar1;
  return;
}


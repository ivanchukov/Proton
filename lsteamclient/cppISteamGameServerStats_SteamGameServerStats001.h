#ifdef __cplusplus
extern "C" {
#endif
extern SteamAPICall_t cppISteamGameServerStats_SteamGameServerStats001_RequestUserStats(void *, CSteamID);
extern bool cppISteamGameServerStats_SteamGameServerStats001_GetUserStat(void *, CSteamID, const char *, int32 *);
extern bool cppISteamGameServerStats_SteamGameServerStats001_GetUserStat_2(void *, CSteamID, const char *, float *);
extern bool cppISteamGameServerStats_SteamGameServerStats001_GetUserAchievement(void *, CSteamID, const char *, bool *);
extern bool cppISteamGameServerStats_SteamGameServerStats001_SetUserStat(void *, CSteamID, const char *, int32);
extern bool cppISteamGameServerStats_SteamGameServerStats001_SetUserStat_2(void *, CSteamID, const char *, float);
extern bool cppISteamGameServerStats_SteamGameServerStats001_UpdateUserAvgRateStat(void *, CSteamID, const char *, float, double);
extern bool cppISteamGameServerStats_SteamGameServerStats001_SetUserAchievement(void *, CSteamID, const char *);
extern bool cppISteamGameServerStats_SteamGameServerStats001_ClearUserAchievement(void *, CSteamID, const char *);
extern SteamAPICall_t cppISteamGameServerStats_SteamGameServerStats001_StoreUserStats(void *, CSteamID);
#ifdef __cplusplus
}
#endif

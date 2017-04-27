/*
 *	Definitions for pg_backup_db.c
 *
 *	IDENTIFICATION
 *		src/bin/pg_dump/pg_backup_db.h
 */

#ifndef PG_BACKUP_DB_H
#define PG_BACKUP_DB_H

#include "pg_backup.h"


extern int	ExecuteSqlCommandBuf(Archive *AHX, const char *buf, size_t bufLen);

extern void ExecuteSqlStatement(Archive *AHX, const char *query);
extern PGresult *ExecuteSqlQuery(Archive *AHX, const char *query,
				ExecStatusType status);
extern PGresult *ExecuteSqlQueryForSingleRow(Archive *fout, char *query);

extern void EndDBCopyMode(Archive *AHX, const char *tocEntryTag);

extern void StartTransaction(Archive *AHX);
extern void CommitTransaction(Archive *AHX);


extern void yj_BeginProfiling();
extern void yj_EndProfiling();
extern bool yj_IsProfiling();
extern void yj_InsertTimePoint(char* point_name);


#endif

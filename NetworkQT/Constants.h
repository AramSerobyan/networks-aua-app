#pragma once
#include <string>
#include <map>
#include <assert.h>

// Notification strings

static const std::string TIME_TICK_NOTIFICATION = "time_tick_notification";

// Timer

static const int DEFAULT_DURATION_SECONDS = 1;
static const int MAX_DURATION_SECONDS = 100;

static const int MAX_DURATION_MILLISECONDS = MAX_DURATION_SECONDS * 1000;
static const int MIN_DURATION_MILLISECONDS = 10;

// Image extensions

static const std::string IMG_EXT_PDF = "pdf";
static const std::string IMG_EXT_PNG = "png";
static const std::string IMG_EXT_JPG = "jpg";


// Graph types

static const std::string GRAPH_RANDOM = "Random graph";
static const std::string GRAPH_HYPER = "Hypercube graph";
static const std::string GRAPH_KNODEL = "Knodel graph";
static const std::string GRAPH_KTREE = "K-ary tree";
static const std::string GRAPH_BINOMIAL = "Binomial tree";
static const std::string GRAPH_COMPLETE = "Complete graph";


// Enums

enum Two_State {uninformed, informed};


// Default color map

static const std::map<int, std::string> DEFAULT_COLOR_MAP = { { 0, "white" }, { 1, "black" }, { 2, "red" }, { 3, "blue" }, { 4, "green" } };

// Random

inline int random_n(int a, int b)
{
	assert(a > -1 && "ERROR: random_n: negative a");
	assert(b > -1 && "ERROR: random_n: negative b");
	if (a < b)
	{
		a += b;
		b = a - b;
		a -= b;
	}
	return rand() % (a - b + 1) + b;
}


// BroadcastScheme

static const int MAX_TICKS = 100;

static const std::string SEND_SCHEME_M1 = "SendSchemeM1";
static const std::string SEND_SCHEME_M2 = "SendSchemeM2";
static const std::string SEND_SCHEME_M3 = "SendSchemeM3";
static const std::string RECEIVE_SCHEME_M = "ReceiveSchemeM";
static const std::string FINISH_SCHEME_M = "FinishSchemeM";